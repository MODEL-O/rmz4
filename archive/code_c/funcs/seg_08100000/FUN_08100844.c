// undefined FUN_08100844(void)
// entry 0x8100844


undefined4 FUN_08100844(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    if (*(char *)(*DAT_08100864 + 0xbe) == -1) {
LAB_081008ac:
      FUN_08001d30(DAT_08100968,
                   ((uint)*(ushort *)(DAT_0810096c + 0x182) -
                   (uint)(*(ushort *)(DAT_08100968 + 6) >> 6)) * 0x20 + 0x10000);
      FUN_08002208(DAT_08100970,
                   ((uint)*(ushort *)(DAT_08100974 + 0x182) - (uint)*(byte *)(DAT_08100970 + 7)) *
                   0x20 + 0x200);
      FUN_0801cc9c(param_1);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
      FUN_0801cf00(param_1,0xc100);
      FUN_0801cff0(param_1);
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined1 *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
      FUN_08005760(param_1 + 0x74,DAT_08100978,param_1 + 0x54,8);
      *(int *)(param_1 + 0xa0) = param_1;
      *(undefined4 *)(param_1 + 0x98) = DAT_0810097c;
      uVar3 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar3;
      piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08100980);
      *(undefined4 *)(param_1 + 0xc) = 1;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
      FUN_08100984(param_1);
      return in_lr;
    }
    bVar1 = *(byte *)(param_1 + 10);
  }
  else {
    if (*(char *)(*DAT_08100864 + 0xbf) == -1) goto LAB_081008ac;
    bVar1 = *(byte *)(param_1 + 10);
  }
  *(byte *)(param_1 + 10) = bVar1 & 0xfc;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_081008a8);
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0xc);
  return in_lr;
}


