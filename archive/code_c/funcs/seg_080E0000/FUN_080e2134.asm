; undefined FUN_080e2134(void)
; entry 0x80e2134  size 48 bytes

080E2134: 10b5         push {r4,lr}
080E2136: 041c         add r4,r0,#0x0
080E2138: 3af75aff     bl 0x0801cff0
080E213C: 201c         add r0,r4,#0x0
080E213E: 7330         add r0,#0x73
080E2140: 0078         ldrb r0,[r0,#0x0]
080E2142: 0328         cmp r0,#0x3
080E2144: 0bd1         bne 0x080e215e
080E2146: 0749         ldr r1,[0x080e2164]
080E2148: 607a         ldrb r0,[r4,#0x9]
080E214A: 8000         lsl r0,r0,#0x2
080E214C: 4018         add r0,r0,r1
080E214E: 0221         mov r1,#0x2
080E2150: e160         str r1,[r4,#0xc]
080E2152: 0068         ldr r0,[r0,#0x0]
080E2154: 8068         ldr r0,[r0,#0x8]
080E2156: 6061         str r0,[r4,#0x14]
080E2158: 201c         add r0,r4,#0x0
080E215A: 00f005f8     bl 0x080e2168
080E215E: 10bc         pop {r4}
080E2160: 01bc         pop {r0}
080E2162: 0047         bx r0
