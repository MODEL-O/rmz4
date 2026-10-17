; undefined FUN_0801a648(void)
; entry 0x801a648  size 44 bytes

0801A648: 00b5         push {lr}
0801A64A: c120         mov r0,#0xc1
0801A64C: e7f7eaff     bl 0x08002624
0801A650: 0848         ldr r0,[0x0801a674]
0801A652: 0949         ldr r1,[0x0801a678]
0801A654: 4318         add r3,r0,r1
0801A656: 1988         ldrh r1,[r3,#0x0]
0801A658: 8022         mov r2,#0x80
0801A65A: d200         lsl r2,r2,#0x3
0801A65C: 101c         add r0,r2,#0x0
0801A65E: 0840         and r0,r1
0801A660: 0028         cmp r0,#0x0
0801A662: 02d0         beq 0x0801a66a
0801A664: 101c         add r0,r2,#0x0
0801A666: 4840         eor r0,r1
0801A668: 1880         strh r0,[r3,#0x0]
0801A66A: c220         mov r0,#0xc2
0801A66C: e7f7daff     bl 0x08002624
0801A670: 01bc         pop {r0}
0801A672: 0047         bx r0
