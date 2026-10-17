; undefined FUN_080e85b0(void)
; entry 0x80e85b0  size 56 bytes

080E85B0: 10b5         push {r4,lr}
080E85B2: 021c         add r2,r0,#0x0
080E85B4: 906a         ldr r0,[r2,#0x28]
080E85B6: 011c         add r1,r0,#0x0
080E85B8: cc31         add r1,#0xcc
080E85BA: 0b88         ldrh r3,[r1,#0x0]
080E85BC: 0024         mov r4,#0x0
080E85BE: 085f         ldrsh r0,[r1,r4]
080E85C0: 0028         cmp r0,#0x0
080E85C2: 01d0         beq 0x080e85c8
080E85C4: 581e         sub r0,r3,#0x1
080E85C6: 0880         strh r0,[r1,#0x0]
080E85C8: 917a         ldrb r1,[r2,#0xa]
080E85CA: fe20         mov r0,#0xfe
080E85CC: 0840         and r0,r1
080E85CE: 9072         strb r0,[r2,#0xa]
080E85D0: 0549         ldr r1,[0x080e85e8]
080E85D2: 507a         ldrb r0,[r2,#0x9]
080E85D4: 8000         lsl r0,r0,#0x2
080E85D6: 4018         add r0,r0,r1
080E85D8: 0421         mov r1,#0x4
080E85DA: d160         str r1,[r2,#0xc]
080E85DC: 0068         ldr r0,[r0,#0x0]
080E85DE: 0069         ldr r0,[r0,#0x10]
080E85E0: 5061         str r0,[r2,#0x14]
080E85E2: 10bc         pop {r4}
080E85E4: 01bc         pop {r0}
080E85E6: 0047         bx r0
