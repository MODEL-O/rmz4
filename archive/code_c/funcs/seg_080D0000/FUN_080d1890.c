// undefined FUN_080d1890(void)
// entry 0x80d1890


undefined4 FUN_080d1890(int param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x12);
  uVar4 = bVar1 + 1;
  *(char *)(param_1 + 0x12) = (char)uVar4;
  if ((uVar4 & 0xff) < 0x21) {
    iVar2 = *(short *)((uVar4 & 0x7f) * 4 + DAT_080d18b4) * 0xdc;
  }
  else {
    if ((uVar4 & 0xff) < 0x7f) goto LAB_080d18da;
    iVar2 = *(short *)(((uint)bVar1 * 0x2000000 + 0x42000000 >> 0x17) + DAT_080d18f8) * -0xdc +
            0x1b800;
  }
  *(int *)(param_1 + 0x54) = iVar2;
LAB_080d18da:
  if (*(char *)(param_1 + 0x12) == -0x60) {
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d18fc);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
  }
  return in_lr;
}


