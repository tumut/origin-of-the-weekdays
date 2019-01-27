# Why are the days named after the planets reckoned in a different order from the actual order?

The names of the days of the week in many languages are derived from the names of the classical planets in Hellenistic astrology.[¹](https://en.wikipedia.org/wiki/Names_of_the_days_of_the_week) The pattern remains the same across many cultures, but here are the planets associated with each day of the week:

| Weekday | Planet |
|---|---|
| Saturday | Saturn ♄ |
| Sunday | Sun ☉ |
| Monday | Moon ☽ |
| Tuesday | Mars ♂︎ |
| Wednesday | Mercury ☿ |
| Thursday | Jupiter ♃ |
| Friday | Venus ♀︎ |

However, this pattern is different from the actual order of the planets, be this order based on the geocentric or the heliocentric model - the geocentric order being based on the period of the revolutions of the planets around the Earth, and the heliocentric order being based on their proximity to the Sun.

| Geocentric Order |
| --- |
| Moon ☽ |
| Mercury ☿ |
| Venus ♀︎ |
| Sun ☉ |
| Mars ♂︎ |
| Jupiter ♃ |
| Saturn ♄ |

| Heliocentric Order |
| --- |
| Sun ☉ |
| Mercury ☿ |
| Venus ♀︎ |
| Moon ☽ |
| Mars ♂︎ |
| Jupiter ♃ |
| Saturn ♄ |

Whence, then, does the order of the weekdays come from?

[This is the theory](http://www.webexhibits.org/calendars/week.html) which we will follow here:

>As we saw in the previous section, the planets have given the week days their names following this order: Moon, Mars, Mercury, Jupiter, Venus, Saturn, Sun
>
>Why this particular order?
>
>One theory goes as follows: If you order the "planets" according to either their presumed distance from Earth (assuming the Earth to be the center of the universe) or their period of revolution around the Earth, you arrive at this order: Moon, Mercury, Venus, Sun, Mars, Jupiter, Saturn
>
>Now, assign (in reverse order) these planets to the hours of the day: 1=Saturn, 2=Jupiter, 3=Mars, 4=Sun, 5=Venus, 6=Mercury, 7=Moon, 8=Saturn, 9=Jupiter, etc., 23=Jupiter, 24=Mars
>
>Then next day will then continue where the old day left off: 1=Sun, 2=Venus, etc., 23=Venus, 24=Mercury
>
>And the next day will go 1=Moon, 2=Saturn, etc.
>
>If you look at the planet assigned to the first hour of each day, you will note that the planets come in this order: Saturn, Sun, Moon, Mars, Mercury, Jupiter, Venus
>
>This is exactly the order of the associated week days.
>
>Coincidence? Maybe.

The code in this repository implements the algorithm described above in order to discover the planets associated with each hour of the day, over the course of a whole week. The planets of the first hour of each day do come out in the same order as the weekdays.

The output can be verified in the file `weekdays.txt`
