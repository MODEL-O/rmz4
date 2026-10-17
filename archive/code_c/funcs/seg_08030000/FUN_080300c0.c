// undefined FUN_080300c0(void)
// entry 0x80300c0


undefined4 FUN_080300c0(int param_1)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  char cVar4;
  short sVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + DAT_080300d8) == '\0') {
    bVar1 = *(byte *)(param_1 + DAT_0803011c);
    bVar2 = bVar1 & 2;
    if ((bVar1 & 2) != 0) {
      return in_lr;
    }
    puVar8 = (uint *)(param_1 + 600);
    if (((*(ushort *)(param_1 + DAT_08030120) & 0x8000) != 0) && ((*puVar8 & 0x80) != 0)) {
      *(undefined1 *)(param_1 + 0xd) = 0xb;
      *(byte *)(param_1 + 0xe) = bVar2;
      *(byte *)(param_1 + 0xf) = bVar2;
      return in_lr;
    }
    puVar6 = (uint *)(param_1 + 0x8c);
    if (((*puVar6 & 0x40000000) == 0) || ((*puVar8 & 0x430) != 0x400)) {
      if (((*puVar6 & 0x20000000) == 0) || ((*puVar8 & 0x400) == 0)) {
        if (((int)*puVar6 < 0) && ((*puVar8 & 0x400) != 0)) {
          *(undefined1 *)(param_1 + 0xd) = 10;
          *(undefined1 *)(param_1 + 0xe) = 0;
          *(undefined1 *)(param_1 + 0xf) = 1;
          return in_lr;
        }
        uVar7 = *puVar8;
        if ((uVar7 & 1) == 0) {
          if ((((uVar7 & 4) != 0) && (bVar1 = *(byte *)(param_1 + DAT_0803011c), (bVar1 & 4) == 0))
             && (cVar4 = FUN_0802ee58(param_1,DAT_08030214), cVar4 != '\0')) {
            *(undefined1 *)(param_1 + 0xe) = 2;
            *(byte *)(param_1 + 0xf) = bVar1 & 4;
            return in_lr;
          }
          if ((*puVar8 & 0x30) == 0) {
            return in_lr;
          }
          uVar3 = 1;
        }
        else {
          if (((uVar7 & 0x80) == 0) || (sVar5 = FUN_0802c4fc(param_1,DAT_080301d8,0), sVar5 == 0)) {
            *(undefined1 *)(param_1 + 0xd) = 1;
            *(undefined1 *)(param_1 + 0xe) = 0;
            goto LAB_08030228;
          }
          *(byte *)(param_1 + 0x142) = *(byte *)(param_1 + 0x142) | 0x10;
          *(int *)(param_1 + 0x124) = *(int *)(param_1 + 0x58) + 0xd00;
          *(undefined1 *)(param_1 + 0xd) = 1;
          uVar3 = 2;
        }
        *(undefined1 *)(param_1 + 0xe) = uVar3;
      }
      else {
        *(undefined1 *)(param_1 + 0xd) = 9;
        *(undefined1 *)(param_1 + 0xe) = 0;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0xd) = 8;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xd) = 7;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
LAB_08030228:
  *(undefined1 *)(param_1 + 0xf) = 0;
  return in_lr;
}


