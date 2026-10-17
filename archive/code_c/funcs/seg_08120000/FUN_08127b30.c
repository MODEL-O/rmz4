// undefined FUN_08127b30(void)
// entry 0x8127b30


undefined4 FUN_08127b30(undefined4 *param_1)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  undefined4 local_10;
  
  *param_1 = 0;
  if ((*DAT_08127bc8 & 0x2000000) != 0) {
    *DAT_08127bc8 = DAT_08127bcc;
  }
  puVar1 = DAT_08127bd0;
  *DAT_08127bd0 = 0x400;
  puVar1[-0x21] = 0x8f;
  puVar1[-0x22] = (short)DAT_08127bd4;
  *DAT_08127bd8 = *DAT_08127bd8 & 0x3f | 0x40;
  puVar2 = DAT_08127bdc;
  *DAT_08127bdc = param_1 + 0xd4;
  puVar2[1] = DAT_08127be0;
  *DAT_08127be4 = param_1;
  local_10 = 0;
  FUN_08128be4(&local_10,param_1,DAT_08127be8);
  *(undefined1 *)((int)param_1 + 6) = 8;
  *(undefined1 *)((int)param_1 + 7) = 0xf;
  param_1[0xe] = DAT_08127bec;
  uVar3 = DAT_08127bf0;
  param_1[10] = DAT_08127bf0;
  param_1[0xb] = uVar3;
  param_1[0xc] = uVar3;
  param_1[0xf] = uVar3;
  uVar3 = DAT_08127bf4;
  FUN_08126f20(DAT_08127bf4);
  param_1[0xd] = uVar3;
  FUN_08127bfc(0x40000);
  *param_1 = DAT_08127bf8;
  return in_lr;
}


