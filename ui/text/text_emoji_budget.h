// Mokagram: потолок одновременно играющих премиум-эмодзи за кадр.
#pragma once

#include "base/basic_types.h"

namespace Ui::Text {

// 0: без ограничения. Остальные эмодзи сверх лимита замирают на текущем кадре.
void SetCustomEmojiBudget(int limit);
[[nodiscard]] bool TakeCustomEmojiBudget();

// То же для анимированных стикеров в сообщениях.
void SetStickerBudget(int limit);
[[nodiscard]] bool TakeStickerBudget();

} // namespace Ui::Text
