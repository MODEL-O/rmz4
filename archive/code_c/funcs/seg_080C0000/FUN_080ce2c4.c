// undefined FUN_080ce2c4(void)
// entry 0x80ce2c4


undefined4 FUN_080ce2c4(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0xbc);
  cVar1 = *(char *)(param_1 + 0xb5);
  iVar3 = *(int *)(param_1 + 0xb8) + -1;
  *(int *)(param_1 + 0xb8) = iVar3;
  if ((iVar3 < 1) || (uVar4 = FUN_0801fb14(DAT_080ce328,param_1 + 0x54), 0x3000 < uVar4)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar5 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ce32c);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar5 + 0xc);
    return in_lr;
  }
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    iVar3 = -(int)*(short *)(param_1 + 0xa4);
    iVar6 = iVar3 + 0x40;
    if (iVar6 < 0) {
      iVar6 = iVar3 + 0x43;
    }
    iVar6 = iVar6 >> 2;
    if (3 < iVar6) {
      iVar6 = 3;
    }
    if (cVar1 == '\0') {
      iVar7 = *(int *)(iVar6 * 4 + DAT_080ce3bc);
    }
    else {
      iVar7 = iVar7 + *(int *)(iVar6 * 4 + DAT_080ce374);
      if (0x200 < iVar7) {
        iVar7 = 0x200;
      }
    }
    *(undefined1 *)(param_1 + 0xb5) = 0x10;
    *(int *)(param_1 + 0xbc) = iVar7;
    *(short *)(param_1 + 0xa4) = 0x40;
    if (*(char *)(param_1 + 0xd) != '\x02') {
      *(undefined1 *)(param_1 + 0xd) = 2;
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
  }
  uVar4 = *(uint *)(param_1 + 0xb8);
  if ((int)uVar4 < 0x3c) {
    if ((uVar4 & 1) == 0) {
LAB_080ce3d4:
      bVar2 = *(byte *)(param_1 + 10) | 1;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) & 0xfe;
    }
  }
  else {
    if (0xb3 < (int)uVar4) goto LAB_080ce3dc;
    if ((uVar4 & 3) != 0) goto LAB_080ce3d4;
    bVar2 = *(byte *)(param_1 + 10) & 0xfe;
  }
  *(byte *)(param_1 + 10) = bVar2;
LAB_080ce3dc:
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080ce3f4));
  return in_lr;
}


