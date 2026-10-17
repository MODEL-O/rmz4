@ FUN_0801c644  entry 0x0801c644  size 82
.thumb
.org 0x1c644
FUN_0801c644:
	push {r4, r5, r6, lr}	@ 0001c644 70b5
.org 0x1c646
	ldr r6, [pc, #80]	@ 0001c646 144e
.org 0x1c648
	ldr r4, [pc, #80]	@ 0001c648 144c
.org 0x1c64a
	ldr r0, [pc, #84]	@ 0001c64a 1548
.org 0x1c64c
	adds r4, r4, r0	@ 0001c64c 2418
.org 0x1c64e
	ldrb r0, [r4, #0]	@ 0001c64e 2078
.org 0x1c650
	movs r1, #9	@ 0001c650 0921
.org 0x1c652
	bl 0x129120	@ 0001c652 0cf165fd
.org 0x1c656
	lsls r0, r0, #24	@ 0001c656 0006
.org 0x1c658
	lsrs r0, r0, #24	@ 0001c658 000e
.org 0x1c65a
	lsls r1, r0, #2	@ 0001c65a 8100
.org 0x1c65c
	adds r1, r1, r0	@ 0001c65c 0918
.org 0x1c65e
	lsls r1, r1, #2	@ 0001c65e 8900
.org 0x1c660
	ldr r5, [pc, #64]	@ 0001c660 104d
.org 0x1c662
	adds r1, r1, r5	@ 0001c662 4919
.org 0x1c664
	ldr r0, [r6, #0]	@ 0001c664 3068
.org 0x1c666
	adds r0, r0, r1	@ 0001c666 4018
.org 0x1c668
	movs r1, #128	@ 0001c668 8021
.org 0x1c66a
	lsls r1, r1, #7	@ 0001c66a c901
.org 0x1c66c
	bl 0x1ea4	@ 0001c66c e5f71afc
.org 0x1c670
	ldrb r0, [r4, #0]	@ 0001c670 2078
.org 0x1c672
	movs r1, #9	@ 0001c672 0921
.org 0x1c674
	bl 0x129120	@ 0001c674 0cf154fd
.org 0x1c678
	lsls r0, r0, #24	@ 0001c678 0006
.org 0x1c67a
	lsrs r0, r0, #24	@ 0001c67a 000e
.org 0x1c67c
	lsls r1, r0, #2	@ 0001c67c 8100
.org 0x1c67e
	adds r1, r1, r0	@ 0001c67e 0918
.org 0x1c680
	lsls r1, r1, #2	@ 0001c680 8900
.org 0x1c682
	adds r1, r1, r5	@ 0001c682 4919
.org 0x1c684
	ldr r0, [r6, #0]	@ 0001c684 3068
.org 0x1c686
	adds r0, r0, r1	@ 0001c686 4018
.org 0x1c688
	adds r0, #12	@ 0001c688 0c30
.org 0x1c68a
	movs r1, #0	@ 0001c68a 0021
.org 0x1c68c
	bl 0x2208	@ 0001c68c e5f7bcfd
.org 0x1c690
	pop {r4, r5, r6}	@ 0001c690 70bc
.org 0x1c692
	pop {r0}	@ 0001c692 01bc
.org 0x1c694
	bx r0	@ 0001c694 0047
