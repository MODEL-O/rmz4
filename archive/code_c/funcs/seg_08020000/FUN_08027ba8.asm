; undefined FUN_08027ba8(void)
; entry 0x8027ba8  size 48 bytes

08027BA8: 10b5         push {r4,lr}
08027BAA: a821         mov r1,#0xa8
08027BAC: 4900         lsl r1,r1,#0x1
08027BAE: 4018         add r0,r0,r1
08027BB0: 0468         ldr r4,[r0,#0x0]
08027BB2: 002c         cmp r4,#0x0
08027BB4: 0dd0         beq 0x08027bd2
08027BB6: 2114         asr r1,r4,#0x10
08027BB8: 0906         lsl r1,r1,#0x18
08027BBA: 090e         lsr r1,r1,#0x18
08027BBC: 220e         lsr r2,r4,#0x18
08027BBE: 064b         ldr r3,[0x08027bd8]
08027BC0: 0648         ldr r0,[0x08027bdc]
08027BC2: 0440         and r4,r0
08027BC4: 6000         lsl r0,r4,#0x1
08027BC6: c018         add r0,r0,r3
08027BC8: 0088         ldrh r0,[r0,#0x0]
08027BCA: 054b         ldr r3,[0x08027be0]
08027BCC: c018         add r0,r0,r3
08027BCE: e5f045fe     bl 0x0810d85c
08027BD2: 10bc         pop {r4}
08027BD4: 01bc         pop {r0}
08027BD6: 0047         bx r0
