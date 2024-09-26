const submitBtn = document.getElementById("submitBtn");
	const resetBtn = document.getElementById("resetBtn");


// Function validation end 

function validateform() {
	const name= document.getElementById("customer'sname").value;
	const age= document.getElementById("age").value;
	const phoneNumber= document.getElementById("phoneNumber").value;
	const email= document.getElementById("email").value;

	var phoneRegex =/^[0-9]{10}$/;

	var emailRegex = /^[^\s@]+@[^\s@]+\.[^\s@]+$/;




	if (name === "" || age === "" || phoneNumber === "" || email === ""){ 
alert("fill in all the fields");
return false;
} 


	



	 if (!phoneNumber.match(phoneRegex)){ 
alert("please enter a valid 10 digit phone number");
console.log(phone);
return false;
} 


	 if (!email.match(emailRegex)){ 
alert("please enter a valid email address");
return false;
} 


	

alert("Reserved");
return true;
}
// Function validation end 
