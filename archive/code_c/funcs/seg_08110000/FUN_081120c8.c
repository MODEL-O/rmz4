// undefined FUN_081120c8(void)
// entry 0x81120c8


undefined4 FUN_081120c8(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  short sVar5;
  ushort uVar6;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        if (*(short *)(param_1 + 10) != 0) {
          sVar5 = *(short *)(param_1 + 10) + -1;
          *(short *)(param_1 + 10) = sVar5;
          iVar3 = DAT_0811217c;
          iVar2 = DAT_08112178;
          uVar4 = (undefined1)sVar5;
          *(undefined1 *)(DAT_08112178 + DAT_0811217c) = uVar4;
          *(undefined1 *)(iVar2 + iVar3 + -1) = uVar4;
          *(undefined1 *)(iVar2 + 0x400) = uVar4;
          goto LAB_081121c2;
        }
        FUN_08002624(0x33);
        *DAT_08112194 = 0;
        *(undefined1 *)(param_1 + 6) = 0;
        uVar4 = 3;
      }
      else {
        if (bVar1 != 3) goto LAB_081121c2;
        if (*(short *)(param_1 + 8) != 0) {
          uVar6 = *(short *)(param_1 + 8) - 1;
          *(ushort *)(param_1 + 8) = uVar6;
          *(ushort *)(DAT_081121b8 + 2) = uVar6 & 0x1f | (0x10 - uVar6) * 0x100;
          goto LAB_081121c2;
        }
        uVar4 = 1;
        *(undefined1 *)(param_1 + 6) = 1;
      }
      *(undefined1 *)(param_1 + 5) = uVar4;
      goto LAB_081121c2;
    }
    if (bVar1 != 0) goto LAB_081121c2;
    *(undefined2 *)(param_1 + 8) = 0;
    *(undefined2 *)(param_1 + 10) = 0x20;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  if (*(short *)(param_1 + 8) < 0x10) {
    uVar6 = *(short *)(param_1 + 8) + 1;
    *(ushort *)(param_1 + 8) = uVar6;
    *(ushort *)(DAT_0811212c + 2) = uVar6 & 0x1f | (0x10 - uVar6) * 0x100;
  }
  if ((*(ushort *)(DAT_08112130 + 4) & 9) == 0) {
    if ((*(ushort *)(DAT_08112130 + 4) & 2) != 0) {
      FUN_08002b10(3);
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x02';
    }
  }
  else {
    FUN_08002b10(2);
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
LAB_081121c2:
  FUN_080025d8(0x33);
  iVar3 = DAT_08112208;
  iVar2 = DAT_08112200;
  FUN_0810d85c((uint)*(ushort *)(DAT_08112200 + DAT_08112204) + DAT_08112208,0xd,2);
  FUN_0810d85c((uint)*(ushort *)
                      ((uint)*(ushort *)((uint)*(byte *)(param_1 + DAT_08112210) * 2 + DAT_0811220c)
                       * 2 + iVar2) + iVar3,3,4);
  return in_lr;
}


