; undefined FUN_080368f4(void)
; entry 0x80368f4  size 36 bytes

080368F4: 00b5         push {lr}
080368F6: 0849         ldr r1,[0x08036918]
080368F8: 4318         add r3,r0,r1
080368FA: 1978         ldrb r1,[r3,#0x0]
080368FC: 0422         mov r2,#0x4
080368FE: 1143         orr r1,r2
08036900: 1970         strb r1,[r3,#0x0]
08036902: 064a         ldr r2,[0x0803691c]
08036904: 064b         ldr r3,[0x08036920]
08036906: c118         add r1,r0,r3
08036908: 0978         ldrb r1,[r1,#0x0]
0803690A: 8900         lsl r1,r1,#0x2
0803690C: 8918         add r1,r1,r2
0803690E: 0968         ldr r1,[r1,#0x0]
08036910: f2f036fb     bl 0x08128f80
08036914: 01bc         pop {r0}
08036916: 0047         bx r0
