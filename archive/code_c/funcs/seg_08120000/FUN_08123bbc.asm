; undefined FUN_08123bbc(void)
; entry 0x8123bbc  size 40 bytes

08123BBC: 00b5         push {lr}
08123BBE: 011c         add r1,r0,#0x0
08123BC0: 0622         mov r2,#0x6
08123BC2: 885e         ldrsh r0,[r1,r2]
08123BC4: 0028         cmp r0,#0x0
08123BC6: 0ad0         beq 0x08123bde
08123BC8: 064a         ldr r2,[0x08123be4]
08123BCA: 8818         add r0,r1,r2
08123BCC: 0649         ldr r1,[0x08123be8]
08123BCE: 0269         ldr r2,[r0,#0x10]
08123BD0: c869         ldr r0,[r1,#0x1c]
08123BD2: 8242         cmp r2,r0
08123BD4: 03d9         bls 0x08123bde
08123BD6: 0020         mov r0,#0x0
08123BD8: 111c         add r1,r2,#0x0
08123BDA: e2f647ff     bl 0x08006a6c
08123BDE: 0020         mov r0,#0x0
08123BE0: 02bc         pop {r1}
08123BE2: 0847         bx r1
