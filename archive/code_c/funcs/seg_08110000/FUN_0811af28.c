// undefined FUN_0811af28(void)
// entry 0x811af28


undefined4 FUN_0811af28(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 in_lr;
  
  uVar4 = 0;
  iVar6 = param_1 + DAT_0811af70;
  do {
    *(undefined1 *)(iVar6 + uVar4) = 0xff;
    uVar4 = uVar4 + 1 & 0xff;
  } while (uVar4 < 6);
  *(undefined1 *)(param_1 + 0xddc) = 0;
  *(undefined1 *)(param_1 + 0xddd) = 0;
  *(undefined1 *)(param_1 + 0xdda) = 0;
  cVar1 = *(char *)(param_1 + 0xddb);
  if (cVar1 != '\0') {
    bVar2 = cVar1 - 1;
    *(undefined1 *)(param_1 + 0xddc) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0xdd4) = 0xff;
    *(undefined1 *)(param_1 + 0xdda) = 1;
    bVar2 = *(byte *)(param_1 + 0xddb);
  }
  uVar7 = (uint)(cVar1 == '\0');
  uVar5 = 10;
  iVar3 = *DAT_0811afb4;
  uVar4 = uVar7;
  do {
    if (((int)(uint)*(byte *)((uVar5 >> 2) + iVar3) >> (uVar5 & 3) + 4 & 1U) != 0) {
      if (uVar4 == bVar2 + uVar7) {
        *(char *)(iVar6 + uVar7) = (char)uVar5;
        *(char *)(param_1 + 0xdda) = *(char *)(param_1 + 0xdda) + '\x01';
        if (uVar7 < 5) {
          uVar7 = uVar7 + 1 & 0xff;
        }
      }
      else if (uVar7 == 5) {
        *(undefined1 *)(param_1 + 0xddd) = 1;
        return in_lr;
      }
      uVar4 = uVar4 + 1 & 0xff;
    }
    uVar5 = uVar5 + 1 & 0xff;
  } while (uVar5 < 0x14);
  return in_lr;
}


