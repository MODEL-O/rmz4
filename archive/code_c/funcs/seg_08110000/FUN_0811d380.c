// undefined FUN_0811d380(void)
// entry 0x811d380


undefined4 FUN_0811d380(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  
  do {
    uVar3 = 0;
    iVar6 = param_1 + DAT_0811d3f4;
    do {
      *(undefined1 *)(iVar6 + uVar3) = 0xff;
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < 7);
    iVar1 = param_1 + DAT_0811d3f8;
    *(undefined1 *)(iVar1 + 0x17) = 0;
    *(undefined1 *)(iVar1 + 0x18) = 0;
    *(undefined1 *)(iVar1 + 3) = 0;
    uVar3 = 0;
    uVar5 = 0;
    uVar4 = 0;
    iVar1 = *DAT_0811d3fc;
    do {
      if (((int)(uint)*(byte *)((uVar3 >> 1) + iVar1) >> ((uVar3 & 1) << 2) & 0xfU) != 0) {
        iVar2 = param_1 + DAT_0811d3f8;
        if (uVar5 == *(byte *)(iVar2 + 0x16) + uVar4) {
          *(char *)(iVar6 + uVar4) = (char)uVar3;
          *(char *)(iVar2 + 3) = *(char *)(iVar2 + 3) + '\x01';
          if (uVar4 < 6) {
            uVar4 = uVar4 + 1 & 0xff;
          }
        }
        else if (uVar4 == 0) {
          *(undefined1 *)(iVar2 + 0x17) = 1;
        }
        else if (uVar4 == 6) {
          *(undefined1 *)(iVar2 + 0x18) = 1;
          break;
        }
        uVar5 = uVar5 + 1 & 0xff;
      }
      uVar3 = uVar3 + 1 & 0xff;
    } while (uVar3 < 0x33);
    iVar1 = param_1 + DAT_0811d438;
    if ((*(char *)(iVar1 + 0xc) != -1) || (*(char *)(iVar1 + 0x17) == '\0')) {
      param_1 = param_1 + DAT_0811d464;
      if (*(char *)(param_1 + 2) != '\0') {
        do {
          if (*(char *)(iVar6 + (uint)*(byte *)(param_1 + 2)) != -1) {
            return in_lr;
          }
          uVar3 = *(byte *)(param_1 + 2) - 1;
          *(char *)(param_1 + 2) = (char)uVar3;
        } while ((uVar3 & 0xff) != 0);
      }
      return in_lr;
    }
    *(char *)(iVar1 + 0x16) = *(char *)(iVar1 + 0x16) + -1;
  } while( true );
}


