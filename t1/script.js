const secondHand = document.querySelector('.second');
const minuteHand = document.querySelector('.minute');
const hourHand = document.querySelector('.hour');
function getTime(){
    const date = new Date();

    const seconds = date.getSeconds();
    const sDegrees = ((seconds / 60) * 360);
    secondHand.style.transform = `rotate(${sDegrees}deg)`;

    const minutes = date.getMinutes();
    const mDegrees = ((minutes / 60) * 360); 
    minuteHand.style.transform = `rotate(${mDegrees}deg)`;

    const hours = date.getHours();
    const hDegrees = ((hours / 12) * 360);
    hourHand.style.transform = `rotate(${hDegrees}deg)`;
    

}
setInterval(getTime, 1000);

getTime();
