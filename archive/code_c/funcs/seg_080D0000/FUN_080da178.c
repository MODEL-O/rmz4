// undefined FUN_080da178(void)
// entry 0x80da178


undefined4 FUN_080da178(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 in_lr;
  undefined4 local_1c;
  int local_18;
  
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  iVar2 = *(int *)(param_1 + 0x5c) * 0xf5;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar2 >> 8;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  FUN_0801cff0(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    local_1c = *(undefined4 *)(param_1 + 0x54);
    local_18 = *(int *)(param_1 + 0x58) + DAT_080da234;
    FUN_080d0c88(1,&local_1c);
    uVar4 = DAT_080da23c * *DAT_080da238 + DAT_080da240;
    *DAT_080da238 = uVar4 & 0x7fffffff;
    uVar4 = (uVar4 & 0x7fffffff) >> 0x10 & 3;
    FUN_080d9fbc(&local_1c,*(byte *)(param_1 + 10) >> 4 & 1,DAT_080da244,uVar4,0);
    FUN_080d9fbc(&local_1c,*(byte *)(param_1 + 10) >> 4 & 1,DAT_080da248,uVar4,0);
    FUN_080d9fbc(&local_1c,*(byte *)(param_1 + 10) >> 4 & 1,DAT_080da24c,uVar4,0);
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080da250);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
  }
  return in_lr;
}


