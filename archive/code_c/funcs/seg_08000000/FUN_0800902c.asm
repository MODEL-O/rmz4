; undefined FUN_0800902c(void)
; entry 0x800902c  size 18 bytes

0800902C: 00b5         push {lr}
0800902E: 8010         asr r0,r0,#0x2
08009030: 8142         cmp r1,r0
08009032: 01db         blt 0x08009038
08009034: 0020         mov r0,#0x0
08009036: 00e0         b 0x0800903a
08009038: c843         mvn r0,r1
0800903A: 02bc         pop {r1}
0800903C: 0847         bx r1
