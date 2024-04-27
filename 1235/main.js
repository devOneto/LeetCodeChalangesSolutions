class Schedule {
    index = 0;
    startTime = 0;
    endTime = 0;
    profit = 0;
}

var jobScheduling = function(startTime, endTime, profit) {

    let result = 0;

    let schedules = [];

    for (let i = 0; i < startTime.length; i++) {
        let newSchedule = new Schedule();

        newSchedule.index = i,
        newSchedule.startTime = startTime[i],
        newSchedule.endTime = endTime[i],
        newSchedule.profit = profit[i]

        schedules.push(newSchedule);
    }

    schedules.forEach(schedule => {
        let possibleResult = schedule.profit;

        let possibleNextSchedules = schedules.filter(s => s.startTime >= schedule.endTime);

        let biggerProfitSchedule = possibleNextSchedules.reduce( (prev, current ) => prev.profit > current.profit ? prev : current);
        let possibleNextNextSchedules = schedules.filter( x => x.index > biggerProfitSchedule && x.startTime >= x.endTime)

        if (possibleResult > result) result = possibleResult;

    });

    return result;
};

var somaProximoProfit = function( schedules, schedule ){
    let possibleNextSchedules = schedules.filter( s => s.startTime >= schedule.endTime );
    
    if ( possibleNextSchedules.length == 0 ){
        return;
    }

    return 

}

var results = [
    // jobScheduling([1,2,3,3], [3,4,5,6], [50,10,40,70]),
    // jobScheduling([1,1,1], [2,3,4], [5,6,4]),
    jobScheduling([1,2,3,4,6], [3,5,10,6,9], [20,20,100,70,60])
]

results.forEach(result => {
    console.log( result );
});