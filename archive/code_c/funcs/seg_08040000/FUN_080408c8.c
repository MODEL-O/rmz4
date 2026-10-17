// undefined FUN_080408c8(void)
// entry 0x80408c8


undefined4 FUN_080408c8(int param_1)

{
  byte bVar1;
  byte *pbVar2;
  int *piVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(iVar6 + 10) >> 4;
  bVar5 = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(byte *)(param_1 + 0x4c) = bVar5;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar5 << 4;
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(iVar6 + 0x54);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(iVar6 + 0x58);
  if (*(char *)(param_1 + 0xd) == '\0') {
    pbVar2 = (byte *)(iVar6 + DAT_08040958);
    if (*pbVar2 == 0xff) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined1 *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0804095c);
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0xc);
    }
    else if (*(char *)(iVar6 + 0xfa) == '\x02') {
      if (*(char *)(param_1 + 0xe) != '\0') {
        FUN_0801cfc8(param_1,*(undefined2 *)((uint)*pbVar2 * 2 + DAT_08040a40),
                     (short)*(char *)(param_1 + 0x71),(short)*(char *)(param_1 + 0x72));
        FUN_0801cff0(param_1);
      }
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        iVar4 = *(int *)(iVar6 + 0x54) - *(int *)((uint)*pbVar2 * 4 + DAT_08040a6c);
      }
      else {
        iVar4 = *(int *)(iVar6 + 0x54) + *(int *)((uint)*pbVar2 * 4 + DAT_08040a44);
      }
      *(int *)(param_1 + 0x54) = iVar4;
      *(int *)(param_1 + 0x58) = *(int *)(iVar6 + 0x58) + *(int *)((uint)*pbVar2 * 4 + DAT_08040a70)
      ;
    }
    else {
      FUN_0801cc9c(param_1);
      FUN_0801ceec(param_1);
      *(undefined2 *)(param_1 + 0x20) = *DAT_080409a0;
      *(undefined1 *)(param_1 + 0x22) = *DAT_080409a4;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      if (*(char *)(param_1 + 0x11) == '\0') {
        FUN_0801cf00(param_1,0x7e00);
      }
      else {
        FUN_0801cf00(param_1,DAT_080409a8);
      }
      FUN_0801cff0(param_1);
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined1 *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      *(int *)(param_1 + 0x40) = param_1 + 0x54;
      *(undefined1 *)(param_1 + 0x25) = 0;
      FUN_0801d3d0(param_1,0xe);
      FUN_08002b10(0x26);
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  }
  else {
    FUN_0801cff0(param_1);
    if (*(char *)(param_1 + 0x73) == '\x03') {
      piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08040aa4);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
      FUN_08040aa8(param_1);
    }
  }
  return in_lr;
}


