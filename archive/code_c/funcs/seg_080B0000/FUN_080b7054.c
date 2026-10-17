// undefined FUN_080b7054(void)
// entry 0x80b7054


undefined4 FUN_080b7054(int param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 in_lr;
  undefined4 local_1c;
  int local_18;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(DAT_080b7124);
    FUN_08005784(param_1 + 0x74,DAT_080b7128);
    local_1c = *(undefined4 *)(*DAT_080b712c + 0x54);
    local_18 = *(int *)(*DAT_080b712c + 0x58) + DAT_080b7130;
    uVar2 = FUN_0810d3ac(param_1 + 0x54,&local_1c);
    iVar1 = DAT_080b7134;
    *(int *)(param_1 + 0x5c) =
         (int)*(short *)((uVar2 * 0x1000000 + 0x40000000 >> 0x17) + DAT_080b7134) << 2;
    *(int *)(param_1 + 0x60) = (int)*(short *)((uVar2 & 0xff) * 2 + iVar1) << 2;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  FUN_080b735c(param_1);
  uVar2 = FUN_0801fb14(DAT_080b7138,param_1 + 0x54);
  if (0x1800 < uVar2) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080b713c);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0xc);
  }
  return in_lr;
}


