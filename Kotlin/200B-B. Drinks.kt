/**
 * Created by Mego on 6/1/2017.
 */

fun main(args: Array<String>) {

    val n = readLine()!!.toInt()
    val input = readLine()!!.split(" ")
    val volumeFraction = (0..input.size - 1).map { input[it].toFloat() }

    var totalOrange = (0..volumeFraction.size - 1)
            .map { (volumeFraction[it] / 100) }
            .sum()

    totalOrange /= n
    println(totalOrange * 100)
}