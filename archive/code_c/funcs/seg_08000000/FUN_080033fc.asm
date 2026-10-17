; undefined FUN_080033fc(void)
; entry 0x80033fc  size 34 bytes

080033FC: 10b5         push {r4,lr}
080033FE: 1204         lsl r2,r2,#0x10
08003400: 1b04         lsl r3,r3,#0x10
08003402: 8024         mov r4,#0x80
08003404: a400         lsl r4,r4,#0x2
08003406: 0019         add r0,r0,r4
08003408: 0068         ldr r0,[r0,#0x0]
0800340A: 9b13         asr r3,r3,#0xe
0800340C: 5212         asr r2,r2,#0x9
0800340E: 1218         add r2,r2,r0
08003410: 9b18         add r3,r3,r2
08003412: 1868         ldr r0,[r3,#0x0]
08003414: 0860         str r0,[r1,#0x0]
08003416: 1960         str r1,[r3,#0x0]
08003418: 10bc         pop {r4}
0800341A: 01bc         pop {r0}
0800341C: 0047         bx r0
