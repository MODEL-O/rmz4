@ FUN_080be914  entry 0x080be914  size 20
.thumb
.org 0xbe914
FUN_080be914:
	push {lr}	@ 000be914 00b5
.org 0xbe916
	ldr r2, [pc, #16]	@ 000be916 044a
.org 0xbe918
	ldrb r1, [r0, #16]	@ 000be918 017c
.org 0xbe91a
	lsls r1, r1, #2	@ 000be91a 8900
.org 0xbe91c
	adds r1, r1, r2	@ 000be91c 8918
.org 0xbe91e
	ldr r1, [r1, #0]	@ 000be91e 0968
.org 0xbe920
	bl 0x128f80	@ 000be920 6af02efb
.org 0xbe924
	pop {r0}	@ 000be924 01bc
.org 0xbe926
	bx r0	@ 000be926 0047
