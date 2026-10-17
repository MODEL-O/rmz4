// undefined FUN_0806d668(void)
// entry 0x806d668


undefined4 FUN_0806d668(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  undefined4 in_lr;
  
  iVar3 = DAT_0806d778;
  iVar2 = DAT_0806d774;
  puVar1 = DAT_0806d770;
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar7 = *(uint *)(param_1 + 0xb4);
    iVar6 = -((int)(-uVar7 | uVar7) >> 0x1f);
    if (*(int *)(param_1 + 0xb8) != 0) {
      iVar6 = iVar6 + 1;
    }
    if (*(int *)(param_1 + 0xbc) != 0) {
      iVar6 = iVar6 + 1;
    }
    if (*(int *)(param_1 + 0xc0) != 0) {
      iVar6 = iVar6 + 1;
    }
    if (iVar6 == 0) {
      return in_lr;
    }
    if (iVar6 == 1) {
      if (uVar7 == 0) {
        if (*(int *)(param_1 + 0xb8) == 0) {
          if (*(int *)(param_1 + 0xbc) == 0) {
            uVar4 = 3;
          }
          else {
            uVar4 = 2;
          }
          *(undefined1 *)(param_1 + 0xd8) = uVar4;
        }
        else {
          *(undefined1 *)(param_1 + 0xd8) = 1;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0xd8) = 0;
      }
    }
    else {
      do {
        uVar7 = *puVar1 * iVar2 + iVar3;
        *puVar1 = uVar7 & 0x7fffffff;
        uVar7 = (uVar7 & 0x7fffffff) >> 0x10 & 3;
        *(char *)(param_1 + 0xd8) = (char)uVar7;
      } while (*(byte *)(param_1 + 0xd9) == uVar7);
    }
    *(byte *)(param_1 + 0xd9) = *(byte *)(param_1 + 0xd8);
    *(undefined1 *)(param_1 + 0xd4 + (uint)*(byte *)(param_1 + 0xd8)) = 1;
    *(undefined1 *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  cVar5 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar5;
  if (cVar5 == -1) {
    *(undefined1 *)(param_1 + 0xd) = 4;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


