// undefined FUN_0803f000(void)
// entry 0x803f000


undefined8
FUN_0803f000(int param_1,int param_2,undefined1 param_3,undefined4 param_4,int param_5,char param_6,
            undefined1 param_7,undefined1 param_8)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar3 = FUN_08005500(*DAT_0803f07c);
  iVar5 = DAT_0803f0e0;
  iVar1 = DAT_0803f080;
  if (iVar3 != 0) {
    if (*(char *)(param_1 + 0xf8) == '\x02') {
      *(undefined1 *)(iVar3 + 9) = 4;
      *(undefined4 *)(iVar3 + 0x14) = **(undefined4 **)(iVar1 + 0x10);
      *(byte *)(iVar3 + 0xb) = *(byte *)(iVar3 + 0xb) & 0xbf;
      *(undefined1 *)(iVar3 + 0x25) = 0x10;
      *(undefined2 *)(iVar3 + 0x20) = *DAT_0803f084;
      *(undefined1 *)(iVar3 + 0x22) = *(undefined1 *)(DAT_0803f088 + 1);
      FUN_0803a8d4(1,0,0);
    }
    else {
      *(undefined1 *)(iVar3 + 9) = 4;
      *(undefined4 *)(iVar3 + 0x14) = **(undefined4 **)(iVar5 + 0x10);
      *(byte *)(iVar3 + 0xb) = *(byte *)(iVar3 + 0xb) & 0xbf;
      *(undefined1 *)(iVar3 + 0x25) = 0x10;
      *(undefined2 *)(iVar3 + 0x20) = *DAT_0803f0e4;
      *(undefined1 *)(iVar3 + 0x22) = *DAT_0803f0e8;
      FUN_0803a8d4(0,0,0);
    }
    *(int *)(iVar3 + 0x28) = param_2;
    *(undefined1 *)(iVar3 + 0x10) = param_3;
    *(undefined1 *)(iVar3 + 0x11) = 0;
    bVar2 = *(byte *)(param_2 + 10) >> 4;
    bVar4 = bVar2 & 1;
    if ((bVar2 & 1) == 0) {
      bVar2 = *(byte *)(iVar3 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(iVar3 + 10) | 0x10;
    }
    *(byte *)(iVar3 + 10) = bVar2;
    *(byte *)(iVar3 + 0x4c) = bVar4;
    *(byte *)(iVar3 + 0x4a) = *(byte *)(iVar3 + 0x4a) & 0xef | bVar4 << 4;
    iVar1 = DAT_0803f158;
    bVar2 = param_6 + 0x80;
    iVar5 = param_5 * *(short *)((uint)bVar2 * 2 + DAT_0803f158) >> 8;
    *(int *)(iVar3 + 0x5c) = iVar5;
    *(int *)(iVar3 + 0x60) = param_5 * *(short *)((bVar2 + 0x40 & 0xff) * 2 + iVar1) >> 8;
    if ((*(byte *)(iVar3 + 10) & 0x10) == 0) {
      *(int *)(iVar3 + 0x54) = *(int *)(param_2 + 0x54) - *(int *)(param_2 + 0x5c);
    }
    else {
      *(int *)(iVar3 + 0x54) = *(int *)(param_2 + 0x54) + *(int *)(param_2 + 0x5c);
      *(int *)(iVar3 + 0x5c) = -iVar5;
    }
    *(int *)(iVar3 + 0x58) = *(int *)(param_2 + 0x58) + *(int *)(param_2 + 0x60);
    *(int *)(iVar3 + 0xb4) = param_5;
    *(byte *)(iVar3 + 0xb8) = bVar2;
    *(undefined1 *)(iVar3 + 0xb9) = param_7;
    *(undefined1 *)(iVar3 + 0xba) = param_8;
  }
  return CONCAT44(in_lr,iVar3);
}


