; undefined FUN_0801159c(void)
; entry 0x801159c  size 34 bytes

0801159C: 00b5         push {lr}
0801159E: 0848         ldr r0,[0x080115c0]
080115A0: 0849         ldr r1,[0x080115c4]
080115A2: 4018         add r0,r0,r1
080115A4: 0178         ldrb r1,[r0,#0x0]
080115A6: 0f20         mov r0,#0xf
080115A8: 0840         and r0,r1
080115AA: 0328         cmp r0,#0x3
080115AC: 05d1         bne 0x080115ba
080115AE: 7620         mov r0,#0x76
080115B0: f1f7d4fa     bl 0x08002b5c
080115B4: 0449         ldr r1,[0x080115c8]
080115B6: 0020         mov r0,#0x0
080115B8: 0880         strh r0,[r1,#0x0]
080115BA: 01bc         pop {r0}
080115BC: 0047         bx r0
