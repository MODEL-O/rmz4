// undefined FUN_0803dea0(void)
// entry 0x803dea0


undefined4 FUN_0803dea0(int param_1)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0xb4);
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        FUN_0803ddf4(param_1);
        cVar2 = *(char *)(param_1 + 0x12) + -1;
        *(char *)(param_1 + 0x12) = cVar2;
        if (cVar2 != '\0') {
          return in_lr;
        }
        *(undefined1 *)(iVar4 + 0x154) = 3;
        *(undefined1 *)(param_1 + 0x12) = 0x10;
      }
      else {
        if (bVar1 != 3) {
          return in_lr;
        }
        cVar2 = FUN_0803ddf4(param_1);
        if (cVar2 != '\0') {
          *(undefined1 *)(param_1 + 0x12) = 1;
          return in_lr;
        }
        cVar2 = *(char *)(param_1 + 0x12) + -1;
        *(char *)(param_1 + 0x12) = cVar2;
        if (cVar2 != '\0') {
          return in_lr;
        }
        *(undefined1 *)(iVar4 + 0x154) = 4;
      }
      goto LAB_0803dfa2;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    FUN_0801cf00(param_1,0x5f00);
    if (*(char *)(param_1 + 0x11) == '\x02') {
      uVar3 = *(ushort *)(iVar4 + 200);
      if ((uVar3 & 1) == 0) {
        if ((uVar3 & 2) == 0) {
          if ((uVar3 & 4) != 0) {
            cVar2 = '\x04';
            goto LAB_0803df14;
          }
          uVar3 = uVar3 & 8;
          cVar2 = '\x05';
        }
        else {
          uVar3 = (ushort)*(byte *)(iVar4 + DAT_0803def8);
          cVar2 = '\x06';
        }
        if (uVar3 == 0) goto LAB_0803df12;
      }
      else {
        cVar2 = '\x03';
      }
    }
    else {
LAB_0803df12:
      cVar2 = *(char *)(param_1 + 0x11);
    }
LAB_0803df14:
    if (cVar2 != '\x06') {
      FUN_0803b2a4(iVar4,param_1);
    }
    *(undefined1 *)(iVar4 + 0x154) = 0;
    *(undefined1 *)(param_1 + 0x12) = 2;
    *(undefined1 *)(param_1 + 0x13) = 0;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  FUN_0803ddf4(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 != '\0') {
    return in_lr;
  }
  *(undefined1 *)(iVar4 + 0x154) = 1;
  *(undefined1 *)(param_1 + 0x12) = 4;
LAB_0803dfa2:
  *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  return in_lr;
}


