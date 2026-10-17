// undefined FUN_0807c2dc(void)
// entry 0x807c2dc


undefined4 FUN_0807c2dc(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  int local_50 [5];
  int iStack_3c;
  int local_38;
  int iStack_34;
  undefined1 local_30 [4];
  int local_2c [2];
  int *local_24;
  
  piVar1 = local_50;
  local_50[0] = *DAT_0807c408;
  local_50[1] = DAT_0807c408[1];
  local_50[2] = DAT_0807c408[2];
  local_50[3] = DAT_0807c408[3];
  local_50[4] = DAT_0807c408[4];
  iStack_3c = DAT_0807c408[5];
  local_38 = DAT_0807c408[6];
  iStack_34 = DAT_0807c408[7];
  FUN_08129258(local_30,DAT_0807c40c,4);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(0x144);
    FUN_08001d30(DAT_0807c410,
                 ((uint)*(ushort *)(DAT_0807c414 + 0x16a) -
                 (uint)(*(ushort *)(DAT_0807c410 + 6) >> 6)) * 0x20 + 0x10000);
    FUN_08002208(DAT_0807c418,
                 ((uint)*(ushort *)(DAT_0807c41c + 0x16a) - (uint)*(byte *)(DAT_0807c418 + 7)) *
                 0x20 + 0x200);
    iVar3 = 0;
    piVar2 = local_50 + 1;
    local_24 = local_2c;
    do {
      local_2c[0] = *(int *)(param_1 + 0xb4) + *piVar1 + 0x7800;
      local_24[1] = *(int *)(param_1 + 0xb8) + *piVar2 + 0x5000;
      FUN_080b5cac(param_1,local_24,local_30[iVar3]);
      piVar2 = piVar2 + 2;
      piVar1 = piVar1 + 2;
      iVar3 = iVar3 + 1;
    } while (iVar3 < 4);
    FUN_0807e8c8(param_1,0xc);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (*(byte *)(param_1 + 0xbc) != 0) {
    FUN_0801cff0(param_1);
  }
  FUN_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                *(int *)((uint)*(ushort *)((uint)*(byte *)(param_1 + 0xbc) * 2 + DAT_0807c424) * 4 +
                        DAT_0807c420)));
  if (*(short *)(param_1 + 0xcc) == 0) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


