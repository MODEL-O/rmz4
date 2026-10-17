; undefined FUN_08108cc0(void)
; entry 0x8108cc0  size 52 bytes

08108CC0: 10b5         push {r4,lr}
08108CC2: 041c         add r4,r0,#0x0
08108CC4: 207c         ldrb r0,[r4,#0x10]
08108CC6: 00f005f9     bl 0x08108ed4
08108CCA: 217c         ldrb r1,[r4,#0x10]
08108CCC: 0020         mov r0,#0x0
08108CCE: ccf76dfd     bl 0x080d57ac
08108CD2: 0028         cmp r0,#0x0
08108CD4: 02d0         beq 0x08108cdc
08108CD6: 2420         mov r0,#0x24
08108CD8: f9f61aff     bl 0x08002b10
08108CDC: 0549         ldr r1,[0x08108cf4]
08108CDE: 607a         ldrb r0,[r4,#0x9]
08108CE0: 8000         lsl r0,r0,#0x2
08108CE2: 4018         add r0,r0,r1
08108CE4: 0421         mov r1,#0x4
08108CE6: e160         str r1,[r4,#0xc]
08108CE8: 0068         ldr r0,[r0,#0x0]
08108CEA: 0069         ldr r0,[r0,#0x10]
08108CEC: 6061         str r0,[r4,#0x14]
08108CEE: 10bc         pop {r4}
08108CF0: 01bc         pop {r0}
08108CF2: 0047         bx r0
