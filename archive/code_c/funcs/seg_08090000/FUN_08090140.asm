; undefined FUN_08090140(void)
; entry 0x8090140  size 50 bytes

08090140: 30b5         push {r4,r5,lr}
08090142: 041c         add r4,r0,#0x0
08090144: a56a         ldr r5,[r4,#0x28]
08090146: e07b         ldrb r0,[r4,#0xf]
08090148: 0028         cmp r0,#0x0
0809014A: 0bd1         bne 0x08090164
0809014C: 201c         add r0,r4,#0x0
0809014E: 7430         add r0,#0x74
08090150: 0849         ldr r1,[0x08090174]
08090152: 75f717fb     bl 0x08005784
08090156: a17a         ldrb r1,[r4,#0xa]
08090158: fe20         mov r0,#0xfe
0809015A: 0840         and r0,r1
0809015C: a072         strb r0,[r4,#0xa]
0809015E: e07b         ldrb r0,[r4,#0xf]
08090160: 0130         add r0,#0x1
08090162: e073         strb r0,[r4,#0xf]
08090164: 686d         ldr r0,[r5,#0x54]
08090166: a96d         ldr r1,[r5,#0x58]
08090168: 6065         str r0,[r4,#0x54]
0809016A: a165         str r1,[r4,#0x58]
0809016C: 30bc         pop {r4,r5}
0809016E: 01bc         pop {r0}
08090170: 0047         bx r0
