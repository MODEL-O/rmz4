// undefined FUN_0804ab64(void)
// entry 0x804ab64


undefined4 FUN_0804ab64(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 in_lr;
  
  FUN_0801cff0();
  if ((*(byte *)(param_1 + 0x11) < 3) &&
     (cVar1 = *(char *)(param_1 + 0x12) + '\x01', *(char *)(param_1 + 0x12) = cVar1, cVar1 == '\t'))
  {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar2 = *(int *)(param_1 + 0x54);
      iVar3 = DAT_0804abb8;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x54);
      iVar3 = 0x1000;
    }
    *(int *)(param_1 + 100) = iVar2 + iVar3;
    iVar3 = FUN_08008534(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 0x68) = iVar3;
    iVar2 = iVar3 - *(int *)(param_1 + 0x58);
    if (iVar2 < 0) {
      if (*(int *)(param_1 + 0x58) - iVar3 <= DAT_0804ac08) goto LAB_0804abc8;
    }
    else if (iVar2 <= DAT_0804abbc) {
LAB_0804abc8:
      FUN_0804a790(*(undefined4 *)(param_1 + 0x28),param_1,*(char *)(param_1 + 0x11) + '\x01');
    }
  }
  if (*(char *)(param_1 + 0xd) == '\0') {
    if ((byte)(*(char *)(param_1 + 0x71) - 1U) < 10) {
      FUN_08005794(param_1 + 0x74,DAT_0804ac0c,0xffffffff,0xffffffff,0xffffffff,
                   *(byte *)(param_1 + 0x11) + 2);
    }
    else {
      FUN_08005794(param_1 + 0x74,DAT_0804ac40,0xffffffff,0xffffffff,0xffffffff,
                   *(byte *)(param_1 + 0x11) + 2);
    }
    if ((*(uint *)(param_1 + 0x8c) & 0x1000) == 0) {
      if ((*(uint *)(param_1 + 0x8c) & 4) == 0) goto LAB_0804ac6c;
    }
    else {
      FUN_08002b10(0x2b);
    }
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  else {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  }
LAB_0804ac6c:
  if (*(char *)(param_1 + 0x73) == '\x03') {
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0804ac90);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 8);
  }
  return in_lr;
}


