/**
 * Created by Mego on 5/30/2017.
 */

fun main(args: Array<String>) {
    var input1 = readLine()!!.split(" ")
    val n = input1[0].toInt()
    val h = input1[1].toInt()

    var input2 = readLine()!!.split(" ")
    var min = 0

    val friends = (0..input2.size - 1).map { input2[it].toInt() }
    for (i in 0..friends.size - 1) {
        if (friends[i] <= h) {
            min++
        } else {
            min += 2
        }
    }
    println(min)
}