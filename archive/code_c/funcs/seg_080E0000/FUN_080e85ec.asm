; undefined FUN_080e85ec(void)
; entry 0x80e85ec  size 36 bytes

080E85EC: 10b5         push {r4,lr}
080E85EE: 031c         add r3,r0,#0x0
080E85F0: 986a         ldr r0,[r3,#0x28]
080E85F2: 011c         add r1,r0,#0x0
080E85F4: cc31         add r1,#0xcc
080E85F6: 0a88         ldrh r2,[r1,#0x0]
080E85F8: 0024         mov r4,#0x0
080E85FA: 085f         ldrsh r0,[r1,r4]
080E85FC: 0028         cmp r0,#0x0
080E85FE: 01d0         beq 0x080e8604
080E8600: 501e         sub r0,r2,#0x1
080E8602: 0880         strh r0,[r1,#0x0]
080E8604: 181c         add r0,r3,#0x0
080E8606: e8f713fb     bl 0x080d0c30
080E860A: 10bc         pop {r4}
080E860C: 01bc         pop {r0}
080E860E: 0047         bx r0
