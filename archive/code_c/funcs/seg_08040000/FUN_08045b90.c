// undefined FUN_08045b90(void)
// entry 0x8045b90


undefined4 FUN_08045b90(int param_1)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0xc0);
  if (*(byte *)(param_1 + 0xe) < 2) {
    if (*(byte *)(param_1 + 0xe) == 1) {
      FUN_080455c4(*(undefined4 *)(param_1 + 0x2c),param_1,0);
    }
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  if (*(char *)(param_1 + 0xd) != '\0') {
    *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + *(int *)(param_1 + 0x60);
    goto LAB_08045cc6;
  }
  bVar1 = false;
  iVar4 = *(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0xbc) = iVar4;
  iVar5 = *(int *)(param_1 + 100);
  if (iVar5 == 0) {
LAB_08045bf4:
    if (!bVar1) goto LAB_08045cc6;
  }
  else {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      if (iVar4 < iVar5) {
        bVar1 = true;
      }
      goto LAB_08045bf4;
    }
    if (iVar4 <= iVar5) goto LAB_08045bf4;
  }
  piVar3 = (int *)(param_1 + 0xc0);
  if (*(int *)(param_1 + 0x68) < *piVar3) {
    *(undefined4 *)(param_1 + 0x60) = DAT_08045c14;
  }
  else {
    *(undefined4 *)(param_1 + 0x60) = 0x600;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x20;
    *(undefined1 *)(param_1 + 0x4d) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xdf | 0x20;
  }
  FUN_08045668(*(undefined4 *)(param_1 + 0x2c),param_1,0 < *(int *)(param_1 + 0x5c),
               0 < *(int *)(param_1 + 0x60));
  FUN_0801cfc8(param_1,DAT_08045cb0,(short)*(char *)(param_1 + 0x71),
               (short)*(char *)(param_1 + 0x72));
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *piVar3 = *piVar3 + *(int *)(param_1 + 0x60);
  FUN_08002b10(0x12);
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
LAB_08045cc6:
  FUN_0801cff0(param_1);
  iVar4 = *(int *)(param_1 + 0xbc);
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    iVar4 = iVar4 + DAT_08045d38;
  }
  *(int *)(param_1 + 0x54) = iVar4;
  iVar4 = *(int *)(param_1 + 0xc0);
  if ((*(byte *)(param_1 + 10) & 0x20) != 0) {
    iVar4 = iVar4 + DAT_08045d38;
  }
  *(int *)(param_1 + 0x58) = iVar4;
  cVar2 = FUN_0803a99c(param_1,3);
  if ((cVar2 != '\0') || ((*(uint *)(param_1 + 0x8c) & 4) != 0)) {
    if (cVar2 != -1) {
      FUN_080457a4(*(undefined4 *)(param_1 + 0x2c),param_1);
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c);
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08045d3c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
  }
  return in_lr;
}


