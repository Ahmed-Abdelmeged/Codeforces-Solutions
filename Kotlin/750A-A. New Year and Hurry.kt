/**
 * Created by Mego on 6/1/2017.
 */

fun main(args: Array<String>) {
    val input = readLine()!!.split(" ")
    var problems = input[0].toInt()
    val timeToGo = input[1].toInt()
    var problemsToSolve: Int = 0
    var availableTimeToSolve = 240 - timeToGo
    while (problems > 0 && (availableTimeToSolve >= problemsToSolve * 5)) {
        problems--
        problemsToSolve++
        availableTimeToSolve -= problemsToSolve * 5
        if (availableTimeToSolve < 0) {
            problemsToSolve--
        }
    }
    println(problemsToSolve)
}