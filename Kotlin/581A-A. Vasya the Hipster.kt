/**
 * Created by Mego on 5/29/2017.
 */

fun main(args: Array<String>) {
    val input = readLine()!!.split(" ")
    var a: Int = input[0].toInt()
    var b: Int = input[1].toInt()

    var maxDays: Int = 0
    var numberOfDays: Int = 0

    if (a < b) {
        maxDays = a
        numberOfDays = (b - a) / 2
    } else {
        maxDays = b
        numberOfDays = (a - b) / 2
    }

    print(maxDays)
    print(" ")
    print(numberOfDays)
}
