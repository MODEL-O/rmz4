; undefined FUN_080d37ac(void)
; entry 0x80d37ac  size 52 bytes

080D37AC: 00b5         push {lr}
080D37AE: 021c         add r2,r0,#0x0
080D37B0: 137c         ldrb r3,[r2,#0x10]
080D37B2: 002b         cmp r3,#0x0
080D37B4: 05d1         bne 0x080d37c2
080D37B6: 0a49         ldr r1,[0x080d37e0]
080D37B8: 507c         ldrb r0,[r2,#0x11]
080D37BA: 8000         lsl r0,r0,#0x2
080D37BC: 0431         add r1,#0x4
080D37BE: 4018         add r0,r0,r1
080D37C0: 0360         str r3,[r0,#0x0]
080D37C2: 917a         ldrb r1,[r2,#0xa]
080D37C4: fe20         mov r0,#0xfe
080D37C6: 0840         and r0,r1
080D37C8: 9072         strb r0,[r2,#0xa]
080D37CA: 0649         ldr r1,[0x080d37e4]
080D37CC: 507a         ldrb r0,[r2,#0x9]
080D37CE: 8000         lsl r0,r0,#0x2
080D37D0: 4018         add r0,r0,r1
080D37D2: 0421         mov r1,#0x4
080D37D4: d160         str r1,[r2,#0xc]
080D37D6: 0068         ldr r0,[r0,#0x0]
080D37D8: 0069         ldr r0,[r0,#0x10]
080D37DA: 5061         str r0,[r2,#0x14]
080D37DC: 01bc         pop {r0}
080D37DE: 0047         bx r0
