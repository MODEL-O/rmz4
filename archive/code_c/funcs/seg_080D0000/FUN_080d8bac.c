// undefined FUN_080d8bac(void)
// entry 0x80d8bac


undefined4 FUN_080d8bac(int param_1)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  undefined4 in_lr;
  undefined4 local_1c;
  undefined4 local_18;
  
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    FUN_080d0c88(2,param_1 + 0x54);
    uVar3 = DAT_080d8c3c * *DAT_080d8c38 + DAT_080d8c40;
    *DAT_080d8c38 = uVar3 & 0x7fffffff;
    uVar3 = (uVar3 & 0x7fffffff) >> 0x10 & 3;
    local_1c = *(undefined4 *)(param_1 + 0x54);
    local_18 = *(undefined4 *)(param_1 + 0x58);
    FUN_080d8a6c(&local_1c,*(byte *)(param_1 + 10) >> 4 & 1,DAT_080d8c44,uVar3,0);
    FUN_080d8a6c(&local_1c,*(byte *)(param_1 + 10) >> 4 & 1,DAT_080d8c48,uVar3,0);
    FUN_080d8a6c(&local_1c,*(byte *)(param_1 + 10) >> 4 & 1,DAT_080d8c4c,uVar3,0);
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d8c50);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
  }
  else {
    if (*(char *)(param_1 + 0xe) == '\0') {
      *(undefined1 *)(param_1 + 0x12) = 0x1e;
      *(undefined4 *)(param_1 + 0x60) = DAT_080d8c9c;
      FUN_0801cf00(param_1,DAT_080d8ca0 + (uint)*(byte *)(param_1 + 0x10));
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    }
    else if (*(char *)(param_1 + 0xe) != '\x01') {
      return in_lr;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) * 0xe0 >> 8;
    FUN_0801cff0(param_1);
  }
  return in_lr;
}


