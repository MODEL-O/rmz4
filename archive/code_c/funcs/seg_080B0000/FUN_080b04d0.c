// undefined FUN_080b04d0(void)
// entry 0x80b04d0


undefined4 FUN_080b04d0(int param_1)

{
  char *pcVar1;
  int *piVar2;
  byte *pbVar3;
  undefined4 in_lr;
  bool bVar4;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_080d0c88(2,param_1 + 0x54);
    pbVar3 = (byte *)(*(int *)(param_1 + 0x28) + 0xb7);
    *pbVar3 = *pbVar3 & ~('\x01' << *(sbyte *)(param_1 + 0x11));
    FUN_0802ab88(1,0xff,param_1 + 0x54);
    FUN_08002b10(0x2a);
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    pcVar1 = (char *)(param_1 + 0xb5);
    if ((*pcVar1 == '\0') && (*(char *)(param_1 + 0x12) != -1)) {
      bVar4 = (*(uint *)(param_1 + 0x8c) & 0x10000) == 0;
      if (bVar4) {
        FUN_08002b10(0x2a);
      }
      FUN_080e52b4(param_1 + 0x54,bVar4,0);
    }
    else {
      FUN_080e52b4(param_1 + 0x54,2,0);
      if (*pcVar1 == '\x01') {
        FUN_08002b10(0x2a);
      }
      else {
        FUN_08002b10(0x35);
      }
    }
    if (*pcVar1 != '\x02') {
      FUN_0802ab88(3,0x1c,param_1 + 0x54);
    }
  }
  if (*(ushort *)(DAT_080b05a8 + 0xc) <= DAT_080b05ac) {
    *(ushort *)(DAT_080b05a8 + 0xc) = *(ushort *)(DAT_080b05a8 + 0xc) + 1;
  }
  FUN_0802abe0(param_1,param_1 + 0x54);
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080b05b0);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0x10);
  return in_lr;
}


