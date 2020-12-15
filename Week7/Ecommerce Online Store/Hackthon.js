        // D6Lw1j3hL2KTGSxV
        import textgears from 'textgears-api';
        // async function spellCheck() {
        //     let text = filecontent.value;
        //     let url = "https://api.textgears.com/spelling?key=D6Lw1j3hL2KTGSxV&text=" + text + "!&language=en-GB";
        //     let response = await fetch(url);
        //     let res;
        //     if (response.ok) {
        //         console.log(response)
        //         res = response.clone().json();
        //         console.log(res);
        //         console.log('Helo' + res.json());
        //     }
        // }
        async function spellCheck() {
            const textgearsApi = textgears('D6Lw1j3hL2KTGSxV', { language: 'en-US' });
            textgearsApi.spelling(filecontent.value)
                .then((data) => {
                    console.log(data)
                    for (const error of data.errors) {
                        console.log('Error: %s. Suggestions: %s', error.bad, error.better.join(', '));
                    }
                })
                .catch((err) => { });
        }
        
        async function ReadFile(files) {
            try {
                if (inputfile.files[0].type === "text/plain") {
                    let file = inputfile.files[0];
                    let reader = new FileReader();
                    reader.readAsText(file);
                    reader.onload = async function () {
                        filecontent.value = reader.result;
                        await spellCheck();
                    }
                } else {
                    alert('File Type is wrong')
                    throw new Error('File type is wrong');
                }
            } catch (Error) {

            }
        }	