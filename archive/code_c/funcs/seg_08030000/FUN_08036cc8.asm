; undefined FUN_08036cc8(void)
; entry 0x8036cc8  size 38 bytes

08036CC8: 10b5         push {r4,lr}
08036CCA: 041c         add r4,r0,#0x0
08036CCC: 0849         ldr r1,[0x08036cf0]
08036CCE: e6f717f9     bl 0x0801cf00
08036CD2: 201c         add r0,r4,#0x0
08036CD4: 0121         mov r1,#0x1
08036CD6: 03f061fb     bl 0x0803a39c
08036CDA: 0648         ldr r0,[0x08036cf4]
08036CDC: 2118         add r1,r4,r0
08036CDE: 0120         mov r0,#0x1
08036CE0: 0870         strb r0,[r1,#0x0]
08036CE2: 201c         add r0,r4,#0x0
08036CE4: 00f008f8     bl 0x08036cf8
08036CE8: 10bc         pop {r4}
08036CEA: 01bc         pop {r0}
08036CEC: 0047         bx r0
