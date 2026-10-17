; undefined FUN_080cf50c(void)
; entry 0x80cf50c  size 72 bytes

080CF50C: 30b5         push {r4,r5,lr}
080CF50E: 041c         add r4,r0,#0x0
080CF510: a56a         ldr r5,[r4,#0x28]
080CF512: e07b         ldrb r0,[r4,#0xf]
080CF514: 0028         cmp r0,#0x0
080CF516: 06d1         bne 0x080cf526
080CF518: 211c         add r1,r4,#0x0
080CF51A: b431         add r1,#0xb4
080CF51C: 5020         mov r0,#0x50
080CF51E: 0860         str r0,[r1,#0x0]
080CF520: e07b         ldrb r0,[r4,#0xf]
080CF522: 0130         add r0,#0x1
080CF524: e073         strb r0,[r4,#0xf]
080CF526: 201c         add r0,r4,#0x0
080CF528: 4df762fd     bl 0x0801cff0
080CF52C: 686d         ldr r0,[r5,#0x54]
080CF52E: 6065         str r0,[r4,#0x54]
080CF530: a86d         ldr r0,[r5,#0x58]
080CF532: 0849         ldr r1,[0x080cf554]
080CF534: 4018         add r0,r0,r1
080CF536: a065         str r0,[r4,#0x58]
080CF538: 211c         add r1,r4,#0x0
080CF53A: b431         add r1,#0xb4
080CF53C: 0868         ldr r0,[r1,#0x0]
080CF53E: 421e         sub r2,r0,#0x1
080CF540: 0a60         str r2,[r1,#0x0]
080CF542: 002a         cmp r2,#0x0
080CF544: 03d1         bne 0x080cf54e
080CF546: 0120         mov r0,#0x1
080CF548: 6073         strb r0,[r4,#0xd]
080CF54A: a273         strb r2,[r4,#0xe]
080CF54C: e273         strb r2,[r4,#0xf]
080CF54E: 30bc         pop {r4,r5}
080CF550: 01bc         pop {r0}
080CF552: 0047         bx r0
