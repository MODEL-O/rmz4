; undefined FUN_0801e518(void)
; entry 0x801e518  size 32 bytes

0801E518: 00b5         push {lr}
0801E51A: 021c         add r2,r0,#0x0
0801E51C: 5168         ldr r1,[r2,#0x4]
0801E51E: a020         mov r0,#0xa0
0801E520: 8002         lsl r0,r0,#0xa
0801E522: 8142         cmp r1,r0
0801E524: 03dc         bgt 0x0801e52e
0801E526: 1168         ldr r1,[r2,#0x0]
0801E528: 0248         ldr r0,[0x0801e534]
0801E52A: 8142         cmp r1,r0
0801E52C: 04dd         ble 0x0801e538
0801E52E: 0120         mov r0,#0x1
0801E530: 03e0         b 0x0801e53a
0801E538: 0020         mov r0,#0x0
0801E53A: 02bc         pop {r1}
0801E53C: 0847         bx r1
