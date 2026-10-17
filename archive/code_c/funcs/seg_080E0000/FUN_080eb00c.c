// undefined FUN_080eb00c(void)
// entry 0x80eb00c


undefined4 FUN_080eb00c(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      FUN_0801cff0(param_1);
      if ((*(char *)(param_1 + 0x10) == '\x02') && (*(char *)(*DAT_080eb118 + DAT_080eb11c) != '\0')
         ) {
        iVar2 = *(int *)(*DAT_080eb118 + 0x54);
        if ((*(int *)(param_1 + 0x54) + 0x600 < iVar2) &&
           (iVar2 < *(int *)(param_1 + 0x54) + 0x3a00)) {
          return in_lr;
        }
      }
      if ((*(byte *)(param_1 + 0x10) & 2) == 0) {
        return in_lr;
      }
      bVar1 = *(byte *)(DAT_080eb120 + 4) & 8;
      if ((*(byte *)(DAT_080eb120 + 4) & 8) != 0) {
        return in_lr;
      }
      *(byte *)(param_1 + 0xd) = bVar1;
      goto LAB_080eb10e;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x73) != '\x03') {
    return in_lr;
  }
  *(byte *)(DAT_080eb0a8 + 0x14) = *(byte *)(DAT_080eb0a8 + 0x14) | 0x80;
  *(byte *)(param_1 + 0xb8) = 0xc3;
  FUN_08001ea4(DAT_080eb0ac + 0xf3c,
               ((uint)*(ushort *)(DAT_080eb0b0 + 0x186) -
               (uint)(*(ushort *)(DAT_080eb0ac + 0xf42) >> 6)) * 0x20 + 0x10000);
  FUN_08002208(DAT_080eb0b4 + 0xf3c,
               ((uint)*(ushort *)(DAT_080eb0b8 + 0x186) - (uint)*(byte *)(DAT_080eb0b4 + 0xf43)) *
               0x20 + 0x200);
  FUN_0801cf00(param_1,(uint)*(byte *)(param_1 + 0xb8) << 8);
  FUN_0801cff0(param_1);
  FUN_080e9590(DAT_080eb0bc);
  bVar1 = *(char *)(param_1 + 0xe) + 1;
LAB_080eb10e:
  *(byte *)(param_1 + 0xe) = bVar1;
  return in_lr;
}


