; undefined FUN_080fbacc(void)
; entry 0x80fbacc  size 56 bytes

080FBACC: 30b5         push {r4,r5,lr}
080FBACE: 041c         add r4,r0,#0x0
080FBAD0: 251c         add r5,r4,#0x0
080FBAD2: bd35         add r5,#0xbd
080FBAD4: 2878         ldrb r0,[r5,#0x0]
080FBAD6: 0028         cmp r0,#0x0
080FBAD8: 05d0         beq 0x080fbae6
080FBADA: 3620         mov r0,#0x36
080FBADC: 06f7a2fd     bl 0x08002624
080FBAE0: 0020         mov r0,#0x0
080FBAE2: 2870         strb r0,[r5,#0x0]
080FBAE4: 02e0         b 0x080fbaec
080FBAE6: ac20         mov r0,#0xac
080FBAE8: 06f79cfd     bl 0x08002624
080FBAEC: 0549         ldr r1,[0x080fbb04]
080FBAEE: 607a         ldrb r0,[r4,#0x9]
080FBAF0: 8000         lsl r0,r0,#0x2
080FBAF2: 4018         add r0,r0,r1
080FBAF4: 0421         mov r1,#0x4
080FBAF6: e160         str r1,[r4,#0xc]
080FBAF8: 0068         ldr r0,[r0,#0x0]
080FBAFA: 0069         ldr r0,[r0,#0x10]
080FBAFC: 6061         str r0,[r4,#0x14]
080FBAFE: 30bc         pop {r4,r5}
080FBB00: 01bc         pop {r0}
080FBB02: 0047         bx r0
