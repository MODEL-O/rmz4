// undefined FUN_08044fb8(void)
// entry 0x8044fb8


undefined4 FUN_08044fb8(int param_1,undefined4 *param_2,undefined1 param_3,byte param_4)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 in_lr;
  
  iVar5 = FUN_08005500(*DAT_08045008);
  iVar2 = DAT_08045060;
  iVar1 = DAT_0804500c;
  if (iVar5 != 0) {
    if (*(char *)(param_1 + 0xf8) == '\x02') {
      *(undefined1 *)(iVar5 + 9) = 0x16;
      *(undefined4 *)(iVar5 + 0x14) = **(undefined4 **)(iVar1 + 0x58);
      *(byte *)(iVar5 + 0xb) = *(byte *)(iVar5 + 0xb) & 0xbf;
      *(undefined1 *)(iVar5 + 0x25) = 0x10;
      *(undefined2 *)(iVar5 + 0x20) = *DAT_08045010;
      uVar3 = *DAT_08045014;
    }
    else {
      *(undefined1 *)(iVar5 + 9) = 0x16;
      *(undefined4 *)(iVar5 + 0x14) = **(undefined4 **)(iVar2 + 0x58);
      *(byte *)(iVar5 + 0xb) = *(byte *)(iVar5 + 0xb) & 0xbf;
      *(undefined1 *)(iVar5 + 0x25) = 0x10;
      *(undefined2 *)(iVar5 + 0x20) = *(undefined2 *)(DAT_08045064 + 2);
      uVar3 = *(undefined1 *)(DAT_08045068 + 1);
    }
    *(undefined1 *)(iVar5 + 0x22) = uVar3;
    *(int *)(iVar5 + 0x2c) = param_1;
    uVar6 = param_2[1];
    *(undefined4 *)(iVar5 + 0x54) = *param_2;
    *(undefined4 *)(iVar5 + 0x58) = uVar6;
    *(undefined1 *)(iVar5 + 0x10) = 1;
    *(undefined1 *)(iVar5 + 0x11) = param_3;
    if (param_4 == 0) {
      bVar4 = *(byte *)(iVar5 + 10) & 0xef;
    }
    else {
      bVar4 = *(byte *)(iVar5 + 10) | 0x10;
    }
    *(byte *)(iVar5 + 10) = bVar4;
    *(byte *)(iVar5 + 0x4c) = param_4 & 1;
    *(byte *)(iVar5 + 0x4a) = *(byte *)(iVar5 + 0x4a) & 0xef | (param_4 & 1) << 4;
  }
  return in_lr;
}


