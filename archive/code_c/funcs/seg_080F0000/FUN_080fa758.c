// undefined FUN_080fa758(void)
// entry 0x80fa758


undefined4 FUN_080fa758(int param_1)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 in_lr;
  int local_18;
  int local_14;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,DAT_080fa77c);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(undefined4 *)(param_1 + 100) = 0xfffffff0;
    }
    else {
      *(undefined4 *)(param_1 + 100) = 0x10;
    }
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 100) << 4;
    FUN_080dd574(param_1 + 0x54,5,0,*(byte *)(param_1 + 10) >> 4 & 1);
    *(undefined1 *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  local_18 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = local_18;
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 100);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  iVar1 = DAT_080fa868;
  if (cVar2 == -1) {
    local_14 = *(int *)(param_1 + 0x58) + DAT_080fa864;
    FUN_080d4c8c(&local_18,DAT_080fa868,0,*(byte *)(param_1 + 10) & 0x10);
    FUN_080d4c8c(&local_18,iVar1 + 0x1c,0,*(byte *)(param_1 + 10) & 0x10);
    FUN_080d4c8c(&local_18,iVar1 + 0x38,0,*(byte *)(param_1 + 10) & 0x10);
    FUN_080d4c8c(&local_18,iVar1 + 0x54,0,*(byte *)(param_1 + 10) & 0x10);
    FUN_080d0c88(1,&local_18);
    FUN_08002b10(0x2a);
    FUN_0802ab88(0,0xff,param_1 + 0x54);
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080fa86c);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0x10);
  }
  return in_lr;
}


