// undefined FUN_0809dd8c(void)
// entry 0x809dd8c


undefined4 FUN_0809dd8c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  int local_10;
  int local_c;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_0809ddb8);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_10 = *(int *)(param_1 + 0x54);
      iVar2 = DAT_0809ddbc;
    }
    else {
      local_10 = *(int *)(param_1 + 0x54);
      iVar2 = 0x1800;
    }
    local_10 = local_10 + iVar2;
    local_c = *(int *)(param_1 + 0x58) + DAT_0809de04;
    uVar1 = FUN_0809e5f4(&local_10,0,1,*(byte *)(param_1 + 10) >> 4 & 1);
    *(undefined4 *)(param_1 + 0x2c) = uVar1;
    FUN_08002b10(0x2d);
  }
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined1 *)(param_1 + 0xd) = 3;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


