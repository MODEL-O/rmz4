; undefined FUN_08001178(void)
; entry 0x8001178  size 62 bytes

08001178: 00b5         push {lr}
0800117A: 81b0         sub sp,#0x4
0800117C: 6946         mov r1,sp
0800117E: 0e48         ldr r0,[0x080011b8]
08001180: 0088         ldrh r0,[r0,#0x0]
08001182: 0880         strh r0,[r1,#0x0]
08001184: 6846         mov r0,sp
08001186: 0088         ldrh r0,[r0,#0x0]
08001188: 9f28         cmp r0,#0x9f
0800118A: 03d9         bls 0x08001194
0800118C: 6846         mov r0,sp
0800118E: 0088         ldrh r0,[r0,#0x0]
08001190: e328         cmp r0,#0xe3
08001192: 0dd1         bne 0x080011b0
08001194: 0949         ldr r1,[0x080011bc]
08001196: 4b68         ldr r3,[r1,#0x4]
08001198: c868         ldr r0,[r1,#0xc]
0800119A: 0288         ldrh r2,[r0,#0x0]
0800119C: 1a80         strh r2,[r3,#0x0]
0800119E: 0230         add r0,#0x2
080011A0: c860         str r0,[r1,#0xc]
080011A2: 2431         add r1,#0x24
080011A4: 4b68         ldr r3,[r1,#0x4]
080011A6: c868         ldr r0,[r1,#0xc]
080011A8: 0288         ldrh r2,[r0,#0x0]
080011AA: 1a80         strh r2,[r3,#0x0]
080011AC: 0230         add r0,#0x2
080011AE: c860         str r0,[r1,#0xc]
080011B0: 01b0         add sp,#0x4
080011B2: 01bc         pop {r0}
080011B4: 0047         bx r0
