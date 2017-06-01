/**
 * Created by Mego on 6/1/2017.
 */

data class Direction(var dis: Int, var dir: String)

fun main(args: Array<String>) {
    var totalDis = 0
    var status = "YES"

    val instructions = arrayListOf<Direction>()
    val n = readLine()!!.toInt()
    for (i in 0..n - 1) {
        val instructionsInput = readLine()!!.split(" ")
        val direction = Direction(instructionsInput[0].toInt(), instructionsInput[1])
        instructions.add(direction)
    }

    for (i in 0..instructions.size - 1) {
        if (instructions[i].dir == "South") {
            totalDis += instructions[i].dis
            if (totalDis > 20000) {
                status = "NO"
                break
            }
        } else if (instructions[i].dir == "North") {
            totalDis -= instructions[i].dis
            if (totalDis < 0) {
                status = "No"
                break
            }
        } else if ((instructions[i].dir == "East") || (instructions[i].dir == "West")) {
            if (totalDis == 20000) {
                status = "No"
                break
            } else if (totalDis == 0) {
                status = "No"
                break
            }
        }
    }

    if (totalDis != 0) {
        status = "NO"
    }
    println(status)
}